//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, FileCacheRecord, NSArray, NSNumber, NSString;

@protocol FileCacheProxy <APDAOProtocol>
- (APDAOResult *)updateDelOptionById:(NSString *)arg1 delOption:(NSNumber *)arg2;
- (APDAOResult *)updateByLocalId:(NSString *)arg1 cloudId:(NSString *)arg2 business:(NSString *)arg3;
- (APDAOResult *)updateBusinessById:(NSString *)arg1 business:(NSString *)arg2;
- (APDAOResult *)updateInfoByLocalId:(NSString *)arg1 info:(NSString *)arg2;
- (APDAOResult *)linkToDBByCloudId:(NSString *)arg1 localId:(NSString *)arg2;
- (APDAOResult *)deleteAllRecords;
- (APDAOResult *)deleteRecordByRecordId:(NSNumber *)arg1;
- (NSNumber *)countSizeByBusiness:(NSString *)arg1 overTime:(NSNumber *)arg2 delOption:(NSNumber *)arg3;
- (NSArray *)countSizeGroupByBusiness;
- (NSNumber *)countDiskByFileType:(NSNumber *)arg1;
- (NSNumber *)countTotolDiskCost:(NSNumber *)arg1;
- (NSArray *)queryRecordsWithOutBussiness:(NSArray *)arg1 overTime:(NSNumber *)arg2;
- (NSArray *)queryRecordsByBussiness:(NSString *)arg1 startTime:(NSNumber *)arg2 endTime:(NSNumber *)arg3 delOption:(NSNumber *)arg4;
- (NSArray *)queryAllRecordsByFileType:(NSNumber *)arg1;
- (NSArray *)queryOverTimesRecords:(NSNumber *)arg1 overTime:(NSNumber *)arg2;
- (NSArray *)queryOlderRecords:(NSNumber *)arg1;
- (NSArray *)queryMigrateRecordsByBussiness:(NSArray *)arg1 after:(NSNumber *)arg2 limit:(NSNumber *)arg3;
- (NSString *)queryCloudIdByLocalId:(NSString *)arg1;
- (NSArray *)queryFileCacheByAnyId:(NSString *)arg1;
- (NSArray *)queryFileCacheByCloudId:(NSString *)arg1;
- (NSArray *)queryFileCacheByLocalId:(NSString *)arg1;
- (APDAOResult *)insertCacheRecord:(FileCacheRecord *)arg1;
@end
