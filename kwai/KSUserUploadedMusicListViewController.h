//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "KSMakeVideoMusicPreviewLogServiceDelegate-Protocol.h"

@class KSVideoMusicListViewController, KS_user_info, NSString;
@protocol KSUPageService;

@interface KSUserUploadedMusicListViewController : KSBaseViewController <KSMakeVideoMusicPreviewLogServiceDelegate>
{
    _Bool _needStopPreview;
    CDUnknownBlockType _didSelectMusicBlock;
    KS_user_info *_user;
    KSVideoMusicListViewController *_contentViewController;
    id <KSUPageService> _pageService;
}

@property(nonatomic) _Bool needStopPreview; // @synthesize needStopPreview=_needStopPreview;
@property(readonly, nonatomic) id <KSUPageService> pageService; // @synthesize pageService=_pageService;
@property(readonly, nonatomic) KSVideoMusicListViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) KS_user_info *user; // @synthesize user=_user;
@property(copy, nonatomic) CDUnknownBlockType didSelectMusicBlock; // @synthesize didSelectMusicBlock=_didSelectMusicBlock;
- (void).cxx_destruct;
- (void)fillUrlPackageForPreviewClickMetaData:(id)arg1;
- (void)avatarViewWasTapped:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

