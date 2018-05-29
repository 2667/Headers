//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SKCloudServiceSetupViewControllerDelegate-Protocol.h"

@class AWEProgressLoadingView, MPMediaLibrary, NSString, SKCloudServiceController, SKCloudServiceSetupViewController;

@interface AWEAppleMusicManager : NSObject <SKCloudServiceSetupViewControllerDelegate>
{
    _Bool _canAddToPlaylist;
    SKCloudServiceController *_cloudServiceController;
    MPMediaLibrary *_mediaLibrary;
    SKCloudServiceSetupViewController *_setupVC;
    CDUnknownBlockType _AppleMusicLoginBlock;
    AWEProgressLoadingView *_indicatorView;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AWEProgressLoadingView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(copy, nonatomic) CDUnknownBlockType AppleMusicLoginBlock; // @synthesize AppleMusicLoginBlock=_AppleMusicLoginBlock;
@property(nonatomic) _Bool canAddToPlaylist; // @synthesize canAddToPlaylist=_canAddToPlaylist;
@property(retain, nonatomic) SKCloudServiceSetupViewController *setupVC; // @synthesize setupVC=_setupVC;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(retain, nonatomic) SKCloudServiceController *cloudServiceController; // @synthesize cloudServiceController=_cloudServiceController;
- (void).cxx_destruct;
- (void)cloudServiceSetupViewControllerDidDismiss:(id)arg1;
- (void)addProductToPlaylist:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playSongFromViewController:(id)arg1 musicID:(id)arg2;
- (void)musicButtonTappedFromSender:(id)arg1 viewController:(id)arg2 musicID:(id)arg3;
- (void)loginAppleMusicFromVC:(id)arg1 completion:(CDUnknownBlockType)arg2 musicID:(id)arg3;
- (void)fetchIsLoggedInWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldEnableAppleMusicForMusicID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

