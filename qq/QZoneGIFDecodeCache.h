//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface QZoneGIFDecodeCache : NSObject
{
    NSMutableDictionary *_cacheDict;
    NSMutableArray *_noNeedCacheArr;
    long long _gifBuffer;
    long long _firstFrameBuffer;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)cleanCacheUrls:(id)arg1;
- (long long)gifbufferOfTheManager:(id)arg1;
- (void)cleanAllBuffer;
- (void)updateGifBuff;
- (_Bool)removeCacheForEnough:(long long)arg1 inKeys:(id)arg2;
- (_Bool)isCanSaveWithSize:(long long)arg1;
- (void)addImageSize:(long long)arg1;
- (long long)gifBuffer_MAX;
- (_Bool)needCacheForUrl:(id)arg1;
- (long long)oneGifBuffer_MAX;
- (id)firstFrameWithURL:(id)arg1;
- (id)cacheHelperForURL:(id)arg1;
- (void)removeCacheForURL:(id)arg1;
- (void)addCacheForURL:(id)arg1 cacheHelper:(id)arg2;
- (id)init;

@end
