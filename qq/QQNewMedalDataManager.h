//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, QQNewMedalImageDownloader;

@interface QQNewMedalDataManager : NSObject
{
    NSMutableArray *_medals;
    NSMutableDictionary *_alreadyReadMedalsDictionary;
    QQNewMedalImageDownloader *_downloader;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QQNewMedalImageDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) NSMutableDictionary *alreadyReadMedalsDictionary; // @synthesize alreadyReadMedalsDictionary=_alreadyReadMedalsDictionary;
@property(retain, nonatomic) NSMutableArray *medals; // @synthesize medals=_medals;
- (void).cxx_destruct;
- (_Bool)hasReadMedalWith:(unsigned int)arg1 level:(unsigned int)arg2;
- (long long)calculateRealNewCountFromServerStr:(id)arg1;
- (id)convertStringToDictionary:(id)arg1;
- (_Bool)isStringContainNumber:(id)arg1;
- (id)parseNewMedalsFromStr:(id)arg1;
- (id)loadNewGotMedalsFromLocalDisk;
- (void)removeLastestMedal;
- (void)saveNewGotMedalsToLocalDiskWithModel:(id)arg1;
- (id)newGotCachePath;
- (id)loadAlreadyReadMedalsFromLocalDisk;
- (void)saveAlreadyReadMedalsToLocalDisk;
- (id)alreadyReadCachePath;
- (_Bool)hasMedalUnread;
- (id)findMedalById:(unsigned int)arg1;
- (id)findUnreadMedal;
- (_Bool)isDataReady;
- (void)removeReadMedals:(id)arg1;
- (void)readReportMedals:(id)arg1;
- (void)readReportAllMedals;
- (_Bool)medalHasRead:(id)arg1;
- (void)setMedalDidRead:(id)arg1;
- (void)readReportLatestMedal;
- (id)findMedalFromLocalDataById:(unsigned int)arg1;
- (void)localMedalsMergeFromServerMedals:(id)arg1;
- (void)requestMedalInfo;
- (void)dealloc;
- (void)onMedalIconDownloadFailed:(id)arg1;
- (void)reloadLocalData;
- (id)init;
- (void)setAlreadyReadMedalLevel:(id)arg1 forKey:(id)arg2;
- (id)alreadyReadMedalLevelForKey:(id)arg1;

@end

