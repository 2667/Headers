//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WBAdLinkCacheModel;

@interface WBAdCache : NSObject
{
    _Bool hasLink;
    WBAdLinkCacheModel *_linkCacheModel;
}

+ (void)removeAllCache;
+ (unsigned long long)p_fileSizeForPath:(id)arg1;
+ (_Bool)downLoadFile:(id)arg1 unzipToPath:(id)arg2 adInfo:(id)arg3;
+ (_Bool)downLoadResponseFile:(id)arg1 toPath:(id)arg2 adInfo:(id)arg3;
+ (_Bool)p_downloadContentResourceForInfo:(id)arg1;
+ (_Bool)p_downloadAllResourceForInfo:(id)arg1;
+ (_Bool)p_checkImageValideForFilePath:(id)arg1;
+ (_Bool)p_checkExistForFilePath:(id)arg1;
+ (_Bool)p_checkResourceFileExistAndImageValideForPath:(id)arg1;
+ (id)saveAdinfosResource:(id)arg1;
+ (_Bool)isSourceExist:(id)arg1;
+ (id)sharedManager;
@property(nonatomic) _Bool hasLink; // @synthesize hasLink;
@property(retain, nonatomic) WBAdLinkCacheModel *linkCacheModel; // @synthesize linkCacheModel=_linkCacheModel;
- (void).cxx_destruct;
- (void)clearCache;
- (void)dealloc;
- (id)init;
- (void)enterBackGroundCacheModel;
- (void)clearLinkCacheModel;
- (_Bool)hasLinkCacheModel;

@end

