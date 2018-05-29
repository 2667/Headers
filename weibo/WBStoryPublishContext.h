//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WBStoryCaptureViewControllerDelegate-Protocol.h"
#import "WBStoryPublishViewControllerDelegate-Protocol.h"

@class NSDictionary, NSString, UIPanGestureRecognizer, WBMediaEditorCache, WBStoryCaptureViewController, WBStoryNavigationController, WBStoryPublishLogger, WBTopic;
@protocol WBStoryMediaCache;

@interface WBStoryPublishContext : NSObject <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, WBStoryCaptureViewControllerDelegate, WBStoryPublishViewControllerDelegate>
{
    struct {
        unsigned int isSendingJob:1;
        unsigned int isInPresenting:1;
        unsigned int isInDismissing:1;
        unsigned int useSystemAnimation:1;
        unsigned int showPublishIntroduce:1;
        unsigned int isNeedUpdateLocation:1;
        unsigned int isInteractiveTransition:1;
    } _flags;
    _Bool _showStatusBarWhenFinish;
    WBTopic *_defaultTopic;
    NSDictionary *_extraParameters;
    UIPanGestureRecognizer *_presentGestureRecognizer;
    UIPanGestureRecognizer *_dismissGestureRecognizer;
    WBMediaEditorCache<WBStoryMediaCache> *_mediaCache;
    WBStoryNavigationController *_navigationController;
    WBStoryCaptureViewController *_captureViewController;
    WBStoryPublishLogger *_currentLogger;
}

+ (id)sharedFeedContext;
@property(retain, nonatomic) WBStoryPublishLogger *currentLogger; // @synthesize currentLogger=_currentLogger;
@property(retain, nonatomic) WBStoryCaptureViewController *captureViewController; // @synthesize captureViewController=_captureViewController;
@property(nonatomic) __weak WBStoryNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) WBMediaEditorCache<WBStoryMediaCache> *mediaCache; // @synthesize mediaCache=_mediaCache;
@property(nonatomic) __weak UIPanGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
@property(nonatomic) __weak UIPanGestureRecognizer *presentGestureRecognizer; // @synthesize presentGestureRecognizer=_presentGestureRecognizer;
@property(nonatomic) _Bool showStatusBarWhenFinish; // @synthesize showStatusBarWhenFinish=_showStatusBarWhenFinish;
@property(retain, nonatomic) NSDictionary *extraParameters; // @synthesize extraParameters=_extraParameters;
@property(retain, nonatomic) WBTopic *defaultTopic; // @synthesize defaultTopic=_defaultTopic;
- (void).cxx_destruct;
- (void)commitPublishLog:(unsigned long long)arg1;
- (void)appendPublishParameters:(id)arg1;
- (void)showNewPublishGudieIfNeeded;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissCaptureViewControllerWithGestureRecognizer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWithJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentCaptureViewControllerFromViewController:(id)arg1 gestureRecognizer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentCaptureViewControllerFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dropCurrentCache;
- (void)storyPublishViewController:(id)arg1 didPressCloseButton:(id)arg2;
- (void)storyPublishViewController:(id)arg1 didFinishWithJob:(id)arg2;
- (void)storyPublishViewControllerLoadingAssetFailed:(id)arg1;
- (void)storyCaptureViewController:(id)arg1 didFinishWithMediaCache:(id)arg2;
- (void)storyCaptureViewController:(id)arg1 didPressBackButton:(id)arg2;
- (void)showStoryPublishViewController;
- (void)updateLocationIfNeeded;
- (void)reset;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

