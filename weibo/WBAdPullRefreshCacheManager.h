//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface WBAdPullRefreshCacheManager : NSObject
{
    _Bool _isDownloading;
    NSArray *_currentModels;
}

+ (id)cacheDirectory;
@property(retain, nonatomic) NSArray *currentModels; // @synthesize currentModels=_currentModels;
@property _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
- (void).cxx_destruct;
- (void)deleteOutDateFilesByOutDays:(int)arg1;
- (void)recoveryDataWithCacheWithoutSupplementalDownload:(_Bool)arg1;
- (id)getAdModelFromMemory;
- (void)notifyNewModel;
- (void)saveToLocalWithRequestData:(id)arg1;
- (void)clearHomeViewPullRefreshAdModel;
- (void)doPullRefreshStuffByDataArray:(id)arg1;
- (id)init;

@end

