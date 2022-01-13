/* _FreeDbc.c */
SQLRETURN _FreeDbc(SQLHDBC hDrvDbc);
/* _FreeDbcList.c */
SQLRETURN _FreeDbcList(SQLHENV hDrvEnv);
/* _FreeResults.c */
SQLRETURN _FreeResults(HSTMTEXTRAS hStmt);
/* _FreeStmt.c */
SQLRETURN _FreeStmt(SQLHSTMT hDrvStmt);
/* _FreeStmtList.c */
SQLRETURN _FreeStmtList(SQLHDBC hDrvDbc);
/* _GetData.c */
SQLRETURN _GetData(SQLHSTMT hDrvStmt, SQLUSMALLINT nCol, SQLSMALLINT nTargetType, SQLPOINTER pTarget, SQLLEN nTargetLength, SQLLEN *pnLengthOrIndicator);
/* _NativeToSQLColumnHeader.c */
SQLRETURN _NativeToSQLColumnHeader(COLUMNHDR *pColumnHeader, void *pNativeColumnHeader);
/* _NativeToSQLType.c */
int _NativeToSQLType(void *pNativeColumnHeader);
/* _NativeTypeDesc.c */
char *_NativeTypeDesc(char *pszTypeName, int nMySQLType);
/* _NativeTypeLength.c */
int _NativeTypeLength(void *pNativeColumnHeader);
/* _NativeTypePrecision.c */
int _NativeTypePrecision(void *pNativeColumnHeader);
/* SQLAllocConnect.c */
SQLRETURN _AllocConnect(SQLHENV hDrvEnv, SQLHDBC *phDrvDbc);
SQLRETURN SQLAllocConnect(SQLHENV hDrvEnv, SQLHDBC *phDrvDbc);
/* SQLAllocEnv.c */
SQLRETURN _AllocEnv(SQLHENV *phDrvEnv);
SQLRETURN SQLAllocEnv(SQLHENV *phDrvEnv);
/* SQLAllocHandle.c */
SQLRETURN SQLAllocHandle(SQLSMALLINT nHandleType, SQLHANDLE nInputHandle, SQLHANDLE *pnOutputHandle);
/* SQLAllocStmt.c */
SQLRETURN _AllocStmt(SQLHDBC hDrvDbc, SQLHSTMT *phDrvStmt);
SQLRETURN SQLAllocStmt(SQLHDBC hDrvDbc, SQLHSTMT *phDrvStmt);
/* SQLBindCol.c */
SQLRETURN SQLBindCol(SQLHSTMT hDrvStmt, SQLUSMALLINT nCol, SQLSMALLINT nTargetType, SQLPOINTER pTargetValue, SQLLEN nTargetValueMax, SQLLEN *pnLengthOrIndicator);
/* SQLBindParameter.c */
SQLRETURN SQLBindParameter(SQLHSTMT hDrvStmt, SQLUSMALLINT nParameterNumber, SQLSMALLINT nIOType, SQLSMALLINT nBufferType, SQLSMALLINT nParamType, SQLULEN nParamLength, SQLSMALLINT nScale, SQLPOINTER pData, SQLLEN nBufferLength, SQLLEN *pnLengthOrIndicator);
/* SQLBrowseConnect.c */
SQLRETURN SQLBrowseConnect(SQLHDBC hDrvDbc, SQLCHAR *szConnStrIn, SQLSMALLINT cbConnStrIn, SQLCHAR *szConnStrOut, SQLSMALLINT cbConnStrOutMax, SQLSMALLINT *pcbConnStrOut);
/* SQLBulkOperations.c */
SQLRETURN SQLBulkOperations(SQLHSTMT hDrvStmt, SQLSMALLINT nOperation);
/* SQLCancel.c */
SQLRETURN SQLCancel(SQLHSTMT hDrvStmt);
/* SQLCloseCursor.c */
SQLRETURN SQLCloseCursor(SQLHSTMT hDrvStmt);
/* SQLColAttribute.c */
SQLRETURN SQLColAttribute(SQLHSTMT hDrvStmt, SQLUSMALLINT nCol, SQLUSMALLINT nFieldIdentifier, SQLPOINTER pszValue, SQLSMALLINT nValueLengthMax, SQLSMALLINT *pnValueLength, SQLLEN *pnValue);
/* SQLColAttributes.c */
SQLRETURN SQLColAttributes(SQLHSTMT hDrvStmt, SQLUSMALLINT nCol, SQLUSMALLINT nDescType, SQLPOINTER pszDesc, SQLSMALLINT nDescMax, SQLSMALLINT *pcbDesc, SQLLEN *pfDesc);
/* SQLColumnPrivileges.c */
SQLRETURN SQLColumnPrivileges(SQLHSTMT hDrvStmt, SQLCHAR *szCatalogName, SQLSMALLINT nCatalogNameLength, SQLCHAR *szSchemaName, SQLSMALLINT nSchemaNameLength, SQLCHAR *szTableName, SQLSMALLINT nTableNameLength, SQLCHAR *szColumnName, SQLSMALLINT nColumnNameLength);
/* SQLColumns.c */
SQLRETURN SQLColumns(SQLHSTMT hDrvStmt, SQLCHAR *szCatalogName, SQLSMALLINT nCatalogNameLength, SQLCHAR *szSchemaName, SQLSMALLINT nSchemaNameLength, SQLCHAR *szTableName, SQLSMALLINT nTableNameLength, SQLCHAR *szColumnName, SQLSMALLINT nColumnNameLength);
/* SQLConnect.c */
SQLRETURN SQLConnect(SQLHDBC hDrvDbc, SQLCHAR *szDataSource, SQLSMALLINT nDataSourceLength, SQLCHAR *szUID, SQLSMALLINT nUIDLength, SQLCHAR *szPWD, SQLSMALLINT nPWDLength);
/* SQLCopyDesc.c */
SQLRETURN SQLCopyDesc(SQLHDESC hSourceDescHandle, SQLHDESC hTargetDescHandle);
/* SQLDescribeCol.c */
SQLRETURN SQLDescribeCol(SQLHSTMT hDrvStmt, SQLUSMALLINT nCol, SQLCHAR *szColName, SQLSMALLINT nColNameMax, SQLSMALLINT *pnColNameLength, SQLSMALLINT *pnSQLDataType, SQLULEN *pnColSize, SQLSMALLINT *pnDecDigits, SQLSMALLINT *pnNullable);
/* SQLDescribeParam.c */
SQLRETURN SQLDescribeParam(SQLHSTMT hDrvStmt, SQLUSMALLINT nParmNumber, SQLSMALLINT *pnDataType, SQLULEN *pnSize, SQLSMALLINT *pnDecDigits, SQLSMALLINT *pnNullable);
/* SQLDisconnect.c */
SQLRETURN SQLDisconnect(SQLHDBC hDrvDbc);
/* SQLDriverConnect.c */
SQLRETURN SQLDriverConnect(SQLHDBC hDrvDbc, SQLHWND hWnd, SQLCHAR *szConnStrIn, SQLSMALLINT nConnStrIn, SQLCHAR *szConnStrOut, SQLSMALLINT cbConnStrOutMax, SQLSMALLINT *pnConnStrOut, SQLUSMALLINT nDriverCompletion);
/* SQLEndTran.c */
SQLRETURN SQLEndTran(SQLSMALLINT nHandleType, SQLHANDLE nHandle, SQLSMALLINT nCompletionType);
/* SQLError.c */
SQLRETURN SQLError(SQLHENV hDrvEnv, SQLHDBC hDrvDbc, SQLHSTMT hDrvStmt, SQLCHAR *szSqlState, SQLINTEGER *pfNativeError, SQLCHAR *szErrorMsg, SQLSMALLINT nErrorMsgMax, SQLSMALLINT *pcbErrorMsg);
/* SQLExecDirect.c */
SQLRETURN SQLExecDirect(SQLHSTMT hDrvStmt, SQLCHAR *szSqlStr, SQLINTEGER nSqlStr);
/* SQLExecute.c */
SQLRETURN SQLExecute(SQLHSTMT hDrvStmt);
/* SQLExtendedFetch.c */
SQLRETURN SQLExtendedFetch(SQLHSTMT hDrvStmt, SQLUSMALLINT nOrientation, SQLLEN nOffset, SQLULEN *pnRowCount, SQLUSMALLINT *pRowStatusArray);
/* SQLFetch.c */
SQLRETURN SQLFetch(SQLHSTMT hDrvStmt);
/* SQLFetchScroll.c */
SQLRETURN SQLFetchScroll(SQLHSTMT hDrvStmt, SQLSMALLINT nOrientation, SQLLEN nOffset);
/* SQLForeignKeys.c */
SQLRETURN SQLForeignKeys(SQLHSTMT hDrvStmt, SQLCHAR *szPKCatalogName, SQLSMALLINT nPKCatalogNameLength, SQLCHAR *szPKSchemaName, SQLSMALLINT nPKSchemaNameLength, SQLCHAR *szPKTableName, SQLSMALLINT nPKTableNameLength, SQLCHAR *szFKCatalogName, SQLSMALLINT nFKCatalogNameLength, SQLCHAR *szFKSchemaName, SQLSMALLINT nFKSchemaNameLength, SQLCHAR *szFKTableName, SQLSMALLINT nFKTableNameLength);
/* SQLFreeConnect.c */
SQLRETURN _FreeConnect(SQLHDBC hDrvDbc);
SQLRETURN SQLFreeConnect(SQLHDBC hDrvDbc);
/* SQLFreeEnv.c */
SQLRETURN _FreeEnv(SQLHENV hDrvEnv);
SQLRETURN SQLFreeEnv(SQLHENV hDrvEnv);
/* SQLFreeHandle.c */
SQLRETURN SQLFreeHandle(SQLSMALLINT nHandleType, SQLHANDLE nHandle);
/* SQLFreeStmt.c */
SQLRETURN SQLFreeStmt(SQLHSTMT hDrvStmt, SQLUSMALLINT nOption);
/* SQLGetConnectAttr.c */
SQLRETURN SQLGetConnectAttr(SQLHDBC hDrvDbc, SQLINTEGER Attribute, SQLPOINTER Value, SQLINTEGER BufferLength, SQLINTEGER *StringLength);
/* SQLGetConnectOption.c */
SQLRETURN SQLGetConnectOption(SQLHDBC hDrvDbc, UWORD fOption, PTR pvParam);
/* SQLGetCursorName.c */
SQLRETURN SQLGetCursorName(SQLHSTMT hDrvStmt, SQLCHAR *szCursor, SQLSMALLINT nCursorMaxLength, SQLSMALLINT *pnCursorLength);
/* SQLGetData.c */
SQLRETURN SQLGetData(SQLHSTMT hDrvStmt, SQLUSMALLINT nCol, SQLSMALLINT nTargetType, SQLPOINTER pTarget, SQLLEN nTargetLength, SQLLEN *pnLengthOrIndicator);
/* SQLGetDescField.c */
SQLRETURN SQLGetDescField(SQLHDESC DescriptorHandle, SQLSMALLINT RecordNumber, SQLSMALLINT FieldIdentifier, SQLPOINTER Value, SQLINTEGER BufferLength, SQLINTEGER *StringLength);
/* SQLGetDescRec.c */
SQLRETURN SQLGetDescRec(SQLHDESC DescriptorHandle, SQLSMALLINT RecordNumber, SQLCHAR *Name, SQLSMALLINT BufferLength, SQLSMALLINT *StringLength, SQLSMALLINT *Type, SQLSMALLINT *SubType, SQLLEN *Length, SQLSMALLINT *Precision, SQLSMALLINT *Scale, SQLSMALLINT *Nullable);
/* SQLGetDiagField.c */
SQLRETURN SQLGetDiagField(SQLSMALLINT HandleType, SQLHANDLE Handle, SQLSMALLINT RecordNumber, SQLSMALLINT DiagIdentifier, SQLPOINTER DiagInfo, SQLSMALLINT BufferLength, SQLSMALLINT *StringLength);
/* SQLGetDiagRec.c */
SQLRETURN SQLGetDiagRec_(SQLSMALLINT nHandleType, SQLHANDLE hHandle, SQLSMALLINT nRecordNumber, SQLCHAR *pszState, SQLINTEGER *pnNativeError, SQLCHAR *pszMessageText, SQLSMALLINT nBufferLength, SQLSMALLINT *pnStringLength);
SQLRETURN SQLGetDiagRec(SQLSMALLINT nHandleType, SQLHANDLE hHandle, SQLSMALLINT nRecordNumber, SQLCHAR *pszState, SQLINTEGER *pnNativeError, SQLCHAR *pszMessageText, SQLSMALLINT nBufferLength, SQLSMALLINT *pnStringLength);
/* SQLGetEnvAttr.c */
SQLRETURN SQLGetEnvAttr(SQLHENV EnvironmentHandle, SQLINTEGER Attribute, SQLPOINTER Value, SQLINTEGER BufferLength, SQLINTEGER *StringLength);
/* SQLGetInfo.c */
SQLRETURN SQLGetInfo(SQLHDBC hDbc, SQLUSMALLINT nInfoType, SQLPOINTER pInfoValue, SQLSMALLINT nInfoValueMax, SQLSMALLINT *pnLength);
/* SQLGetStmtAttr.c */
SQLRETURN SQLGetStmtAttr(SQLHSTMT hDrvStmt, SQLINTEGER Attribute, SQLPOINTER Value, SQLINTEGER BufferLength, SQLINTEGER *StringLength);
/* SQLGetStmtOption.c */
SQLRETURN SQLGetStmtOption(SQLHSTMT hDrvStmt, UWORD fOption, PTR pvParam);
/* SQLGetTypeInfo.c */
SQLRETURN SQLGetTypeInfo(SQLHSTMT hDrvStmt, SQLSMALLINT nSqlType);
/* SQLMoreResults.c */
SQLRETURN SQLMoreResults(SQLHSTMT hDrvStmt);
/* SQLNativeSql.c */
SQLRETURN SQLNativeSql(SQLHSTMT hDrvStmt, SQLCHAR *szSqlStrIn, SQLINTEGER cbSqlStrIn, SQLCHAR *szSqlStr, SQLINTEGER cbSqlStrMax, SQLINTEGER *pcbSqlStr);
/* SQLNumParams.c */
SQLRETURN SQLNumParams(SQLHSTMT hDrvStmt, SQLSMALLINT *pnParamCount);
/* SQLNumResultCols.c */
SQLRETURN SQLNumResultCols(SQLHSTMT hDrvStmt, SQLSMALLINT *pnColumnCount);
/* SQLParamData.c */
SQLRETURN SQLParamData(SQLHSTMT hDrvStmt, SQLPOINTER *pValue);
/* SQLParamOptions.c */
SQLRETURN SQLParamOptions(SQLHSTMT hDrvStmt, SQLULEN nRow, SQLULEN *pnRow);
/* SQLPrepare.c */
SQLRETURN SQLPrepare(SQLHSTMT hDrvStmt, SQLCHAR *szSqlStr, SQLINTEGER nSqlStrLength);
SQLRETURN template_SQLPrepare(SQLHSTMT hDrvStmt, SQLCHAR *szSqlStr, SQLINTEGER nSqlStrLength);
/* SQLPrimaryKeys.c */
SQLRETURN SQLPrimaryKeys(SQLHSTMT hDrvStmt, SQLCHAR *szCatalogName, SQLSMALLINT nCatalogNameLength, SQLCHAR *szSchemaName, SQLSMALLINT nSchemaNameLength, SQLCHAR *szTableName, SQLSMALLINT nTableNameLength);
/* SQLProcedureColumns.c */
SQLRETURN SQLProcedureColumns(SQLHSTMT hDrvStmt, SQLCHAR *szCatalogName, SQLSMALLINT nCatalogNameLength, SQLCHAR *szSchemaName, SQLSMALLINT nSchemaNameLength, SQLCHAR *szProcName, SQLSMALLINT nProcNameLength, SQLCHAR *szColumnName, SQLSMALLINT nColumnNameLength);
/* SQLProcedures.c */
SQLRETURN SQLProcedures(SQLHSTMT hDrvStmt, SQLCHAR *szCatalogName, SQLSMALLINT nCatalogNameLength, SQLCHAR *szSchemaName, SQLSMALLINT nSchemaNameLength, SQLCHAR *szProcName, SQLSMALLINT nProcNameLength);
/* SQLPutData.c */
SQLRETURN SQLPutData(SQLHSTMT hDrvStmt, SQLPOINTER pData, SQLLEN nLengthOrIndicator);
/* SQLRowCount.c */
SQLRETURN SQLRowCount(SQLHSTMT hDrvStmt, SQLLEN *pnRowCount);
/* SQLSetConnectOption.c */
SQLRETURN SQLSetConnectOption(SQLHDBC hDrvDbc, UWORD nOption, SQLULEN vParam);
/* SQLSetCursorName.c */
SQLRETURN SQLSetCursorName(SQLHSTMT hDrvStmt, SQLCHAR *szCursor, SQLSMALLINT nCursorLength);
/* SQLSetDescField.c */
SQLRETURN SQLSetDescField(SQLHDESC DescriptorHandle, SQLSMALLINT RecordNumber, SQLSMALLINT FieldIdentifier, SQLPOINTER Value, SQLINTEGER BufferLength);
/* SQLSetDescRec.c */
SQLRETURN SQLSetDescRec(SQLHDESC hDescriptorHandle, SQLSMALLINT nRecordNumber, SQLSMALLINT nType, SQLSMALLINT nSubType, SQLLEN nLength, SQLSMALLINT nPrecision, SQLSMALLINT nScale, SQLPOINTER pData, SQLLEN *pnStringLength, SQLLEN *pnIndicator);
/* SQLSetEnvAttr.c */
SQLRETURN SQLSetEnvAttr(SQLHENV EnvironmentHandle, SQLINTEGER Attribute, SQLPOINTER Value, SQLINTEGER StringLength);
/* SQLSetParam.c */
SQLRETURN SQLSetParam(SQLHSTMT hDrvStmt, SQLUSMALLINT nPar, SQLSMALLINT nType, SQLSMALLINT nSqlType, SQLULEN nColDef, SQLSMALLINT nScale, SQLPOINTER pValue, SQLLEN *pnValue);
/* SQLSetPos.c */
SQLRETURN SQLSetPos(SQLHSTMT hDrvStmt, SQLSETPOSIROW nRow, SQLUSMALLINT nOperation, SQLUSMALLINT nLockType);
/* SQLSetScrollOptions.c */
SQLRETURN SQLSetScrollOptions(SQLHSTMT hDrvStmt, SQLUSMALLINT fConcurrency, SQLLEN crowKeyset, SQLUSMALLINT crowRowset);
/* SQLSetStmtAttr.c */
SQLRETURN SQLSetStmtAttr(SQLHSTMT hDrvStmt, SQLINTEGER Attribute, SQLPOINTER Value, SQLINTEGER StringLength);
/* SQLSetStmtOption.c */
SQLRETURN SQLSetStmtOption(SQLHSTMT hDrvStmt, UWORD fOption, SQLULEN vParam);
/* SQLSpecialColumns.c */
SQLRETURN SQLSpecialColumns(SQLHSTMT hDrvStmt, UWORD nColumnType, UCHAR *szCatalogName, SWORD nCatalogNameLength, UCHAR *szSchemaName, SWORD nSchemaNameLength, UCHAR *szTableName, SWORD nTableNameLength, UWORD nScope, UWORD nNullable);
/* SQLStatistics.c */
SQLRETURN SQLStatistics(SQLHSTMT hDrvStmt, SQLCHAR *szCatalogName, SQLSMALLINT nCatalogNameLength, SQLCHAR *szSchemaName, SQLSMALLINT nSchemaNameLength, SQLCHAR *szTableName, SQLSMALLINT nTableNameLength, SQLUSMALLINT nTypeOfIndex, SQLUSMALLINT nReserved);
/* SQLTablePrivileges.c */
SQLRETURN SQLTablePrivileges(SQLHSTMT hDrvStmt, SQLCHAR *szCatalogName, SQLSMALLINT nCatalogNameLength, SQLCHAR *szSchemaName, SQLSMALLINT nSchemaNameLength, SQLCHAR *szTableName, SQLSMALLINT nTableNameLength);
/* SQLTables.c */
SQLRETURN SQLTables(SQLHSTMT hDrvStmt, SQLCHAR *szCatalogName, SQLSMALLINT nCatalogNameLength, SQLCHAR *szSchemaName, SQLSMALLINT nSchemaNameLength, SQLCHAR *szTableName, SQLSMALLINT nTableNameLength, SQLCHAR *szTableType, SQLSMALLINT nTableTypeLength);
/* SQLTransact.c */
SQLRETURN SQLTransact(SQLHENV hDrvEnv, SQLHDBC hDrvDbc, UWORD nType);
