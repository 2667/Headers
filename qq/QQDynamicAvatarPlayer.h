//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol QQDynamicAvatarPlayerDelegate;

@interface QQDynamicAvatarPlayer : NSObject
{
    _Bool _resumeWhenAppBecomeActive;
    _Bool _isMuted;
    _Bool _isCycleplay;
    unsigned long long _playStatus;
    id <QQDynamicAvatarPlayerDelegate> _delegate;
}

@property(nonatomic) __weak id <QQDynamicAvatarPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isCycleplay; // @synthesize isCycleplay=_isCycleplay;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(readonly, nonatomic) unsigned long long playStatus; // @synthesize playStatus=_playStatus;
- (void).cxx_destruct;
- (void)replay;
- (void)stopAndClear;
- (void)stop;
- (void)pause;
- (void)play;
- (_Bool)loadVideo:(id)arg1 videoSize:(struct CGSize)arg2;
- (void)appBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)dealloc;
- (id)init;

@end
