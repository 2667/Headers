//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol YXGoLiveViewModelDelegate;

@interface YXGoLiveViewModel : NSObject
{
    NSObject<YXGoLiveViewModelDelegate> *_delegate;
    NSString *_lastLiveVideoScid;
}

@property(copy, nonatomic) NSString *lastLiveVideoScid; // @synthesize lastLiveVideoScid=_lastLiveVideoScid;
@property(nonatomic) __weak NSObject<YXGoLiveViewModelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pushResumeLiveChatManager;
- (void)yx_showResumeLive;
- (void)yx_validateLogin;
- (id)init;

@end

