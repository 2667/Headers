//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LiveRoomSDK_URLDispatch : NSObject
{
}

+ (_Bool)isVideoSliceUrl:(id)arg1;
+ (_Bool)isLinkLineGameUrl:(id)arg1;
+ (_Bool)isLiveClientLandscapeUrl:(id)arg1;
+ (_Bool)isMillionBabyLive:(id)arg1;
+ (_Bool)isLiveTMAllOnlyUrl:(id)arg1;
+ (_Bool)isLiveClientUrl:(id)arg1;
+ (id)viewControllerWithUrl:(id)arg1 sourceVC:(id)arg2 params:(id)arg3;
- (_Bool)handleSameLive:(id)arg1 withCurrentLiveVC:(id)arg2;

@end

