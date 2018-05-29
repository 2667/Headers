//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBAdVideoStoreManager : NSObject
{
}

- (id)p_videoModelForResultSet:(id)arg1;
- (id)p_queryVideosForSql:(id)arg1;
- (_Bool)cleanSourceInfoForVideos:(id)arg1;
- (_Bool)deleteAllVideos;
- (_Bool)deleteVideos:(id)arg1;
- (id)videosWillCleanForDays:(long long)arg1;
- (id)allOutdateVideosForDays:(long long)arg1;
- (id)outdateVideos;
- (id)sendBackVideos;
- (_Bool)downloadFailureForVideo:(id)arg1;
- (_Bool)downloadSuccessForVideo:(id)arg1;
- (id)videoForDownload;
- (_Bool)sentBackSuccessForVideos:(id)arg1;
- (_Bool)storeVideos:(id)arg1;

@end

