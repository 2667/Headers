//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEStoryPlayViewController;

@protocol AWEStoryPlayViewControllerDelegate <NSObject>
- (void)storyPlayViewController:(AWEStoryPlayViewController *)arg1 storyDidExpireAtIndex:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (void)storyPlayViewControllerDidFinishPlay:(AWEStoryPlayViewController *)arg1;
- (void)storyPlayViewControllerWillFinishPlay:(AWEStoryPlayViewController *)arg1;
- (void)storyPlayViewControllerDidStartPlay:(AWEStoryPlayViewController *)arg1;
- (void)storyPlayViewControllerWillStartPlay:(AWEStoryPlayViewController *)arg1;
- (_Bool)storyPlayViewControllerShouldBeginPrepareAndPlayStory:(AWEStoryPlayViewController *)arg1;

@optional
- (void)storyPlayViewControllerDidDeleteCurrentUsersStory:(AWEStoryPlayViewController *)arg1;
@end

