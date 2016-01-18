HRESULT __thiscall CDOMStringDataList::InitFromString(CDOMStringDataList *this, LPCWSTR lpCWStr)
{
  SIZE_T strLen; // Used in different places differently
  HRESULT hResult;
  PWCHAR pCurChar;
  CStr *pCStr;
  PWCHAR pCurString;
  CDOMStringDataList *pCDOMStringDataList;
  int outString;

  strLen = 0;
  pCDOMStringDataList = this;
  hResult = S_OK;
  CDOMStringDataList::Clear(this);
  pCurChar = (PWCHAR)lpCWStr;
  while ( *pCurChar != (_WORD)strLen )
  {
    // Trim white spaces
    while ( IsCharSpaceW(*pCurChar) )
      ++pCurChar;
    // Bail out if string starts with comma
    if ( *pCurChar == ',' )
      return E_FAIL;
    pCurString = pCurChar;
    do
    {
      ++pCurChar;
      ++strLen;
    }
    while ( !IsCharSpaceW(*pCurChar) && *pCurChar != ',' && *pCurChar );
    outString = NULL;
    hResult = CImplAry::AppendIndirect<4>(pCDOMStringDataList, &outString, &pCStr);
    if ( hResult < 0 || (hResult = CStr::Set(pCStr, (LPVOID)strLen, pCurString, strLen, 1), hResult < 0) )
    {
      CStr::_Free((CStr *)&outString);
      return hResult;
    }
    while ( IsCharSpaceW(*pCurChar) )
      ++pCurChar;
    if ( *pCurChar == ',' )
      ++pCurChar;
    CStr::_Free((CStr *)&outString);
    strLen = 0;
  }
  return hResult;
}