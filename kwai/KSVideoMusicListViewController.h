//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSSubMusicListViewController.h"

#import "KSMusicStateChangeSubscriber-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KSMusicViewModel, KSVideoMusicListLogService, KSVideoMusicRealTimeLogService, NSArray, NSString, NSTimer;

@interface KSVideoMusicListViewController : KSSubMusicListViewController <UITableViewDataSource, UITableViewDelegate, KSMusicStateChangeSubscriber>
{
    _Bool _showNavigationBarShadowLine;
    short _source;
    NSString *_pageTitle;
    KSMusicViewModel *_musicViewModel;
    CDUnknownBlockType _didSelectMusicBlock;
    double _tableViewOffset;
    KSVideoMusicListLogService *_logService;
    NSArray *_subChannels;
    NSTimer *_timer;
    KSVideoMusicRealTimeLogService *_realTimeLogService;
}

@property(retain, nonatomic) KSVideoMusicRealTimeLogService *realTimeLogService; // @synthesize realTimeLogService=_realTimeLogService;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSArray *subChannels; // @synthesize subChannels=_subChannels;
@property(retain, nonatomic) KSVideoMusicListLogService *logService; // @synthesize logService=_logService;
@property(nonatomic) short source; // @synthesize source=_source;
@property(nonatomic) _Bool showNavigationBarShadowLine; // @synthesize showNavigationBarShadowLine=_showNavigationBarShadowLine;
@property(nonatomic) double tableViewOffset; // @synthesize tableViewOffset=_tableViewOffset;
@property(copy, nonatomic) CDUnknownBlockType didSelectMusicBlock; // @synthesize didSelectMusicBlock=_didSelectMusicBlock;
@property(retain, nonatomic) KSMusicViewModel *musicViewModel; // @synthesize musicViewModel=_musicViewModel;
@property(retain, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
- (void).cxx_destruct;
- (_Bool)_needUploadRealTimeLog;
- (void)musicStateChanged:(id)arg1;
- (id)trimContextForMusic:(id)arg1;
- (void)modelDidFinishLoad:(id)arg1;
- (void)didSelectCell:(id)arg1 withListObject:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)cellWithListObject:(id)arg1 atIndexPath:(id)arg2;
- (void)setPageService:(id)arg1;
- (void)setChannel:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
