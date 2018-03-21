//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEVideosCollectionViewDetailAnimationDelegate-Protocol.h"
#import "HTSPlayerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEVideoPublishViewModel, HTSPlayer, NSArray, NSString, UIImage, UIImageView, UIView;

@interface AWEPublishPreviewController : UIViewController <HTSPlayerDelegate, AWEVideosCollectionViewDetailAnimationDelegate, UIGestureRecognizerDelegate>
{
    long long _tryPlayCount;
    HTSPlayer *_player;
    UIImageView *_previewImageView;
    UIView *_playerContainerView;
    UIImage *_previewImage;
    NSArray *_observers;
    AWEVideoPublishViewModel *_publishViewModel;
}

@property(retain, nonatomic) AWEVideoPublishViewModel *publishViewModel; // @synthesize publishViewModel=_publishViewModel;
@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(retain, nonatomic) UIView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) HTSPlayer *player; // @synthesize player=_player;
@property(nonatomic) long long tryPlayCount; // @synthesize tryPlayCount=_tryPlayCount;
- (void).cxx_destruct;
- (void)closeSelf;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadPlayer;
- (id)initWithPublishViewModel:(id)arg1 player:(id)arg2 previewImage:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
