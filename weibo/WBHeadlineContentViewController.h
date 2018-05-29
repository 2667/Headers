//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBHeadlineContentBaseViewController.h"

#import "ArticleCardCellProtocol-Protocol.h"
#import "DTAttributedTextContentViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WBMediaAutoPlayContainer-Protocol.h"

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, WBRecycleScrollView, WBTableView, WBUniversalArticle;
@protocol WBHeadlineContentViewControllerCopyAndShareDelegate, WBHeadlineContentViewControllerDeleteCardDelegate, WBMediaPlaybackService;

@interface WBHeadlineContentViewController : WBHeadlineContentBaseViewController <DTAttributedTextContentViewDelegate, UITableViewDelegate, UITableViewDataSource, WBMediaAutoPlayContainer, ArticleCardCellProtocol>
{
    WBUniversalArticle *_article;
    NSArray *_pictures;
    WBRecycleScrollView *_recycleScrollView;
    NSMutableArray *_pragraphModelArray;
    CDUnknownBlockType _articleContentTotalHeightChangedBlock;
    id <WBHeadlineContentViewControllerDeleteCardDelegate> _deleteDelegate;
    NSMutableDictionary *_pictureDicts;
    NSMutableDictionary *_imageViewsDict;
    struct CGRect _visibleBounds;
}

@property(retain, nonatomic) NSMutableDictionary *imageViewsDict; // @synthesize imageViewsDict=_imageViewsDict;
@property(retain, nonatomic) NSMutableDictionary *pictureDicts; // @synthesize pictureDicts=_pictureDicts;
@property(nonatomic) __weak id <WBHeadlineContentViewControllerDeleteCardDelegate> deleteDelegate; // @synthesize deleteDelegate=_deleteDelegate;
@property(copy, nonatomic) CDUnknownBlockType articleContentTotalHeightChangedBlock; // @synthesize articleContentTotalHeightChangedBlock=_articleContentTotalHeightChangedBlock;
@property(retain, nonatomic) NSMutableArray *pragraphModelArray; // @synthesize pragraphModelArray=_pragraphModelArray;
@property(nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
@property(retain, nonatomic) WBRecycleScrollView *recycleScrollView; // @synthesize recycleScrollView=_recycleScrollView;
@property(retain, nonatomic) NSArray *pictures; // @synthesize pictures=_pictures;
@property(retain, nonatomic) WBUniversalArticle *article; // @synthesize article=_article;
- (void).cxx_destruct;
- (void)_configPictures;
- (void)resetDataSourceForReuse;
- (void)notifyDidFinishScroll;
- (id)analysisParameters;
- (void)linkPushed:(id)arg1;
- (void)imageSizeDidChanged:(struct CGSize)arg1 presetImageSize:(struct CGSize)arg2 forPragraphIndex:(long long)arg3;
- (void)imagePressed:(id)arg1;
- (void)handleActionWithArticleCardCell:(id)arg1 actionType:(int)arg2 pageCard:(id)arg3 actionPara:(id)arg4;
- (_Bool)attributedTextContentView:(id)arg1 shouldDrawBackgroundForTextBlock:(id)arg2 frame:(struct CGRect)arg3 context:(struct CGContext *)arg4 forLayoutFrame:(id)arg5;
- (id)attributedTextContentView:(id)arg1 viewForAttributedString:(id)arg2 frame:(struct CGRect)arg3;
@property(readonly, nonatomic) NSArray *currentMediaAutoPlayProviderCandidates;
@property(readonly, nonatomic) id <WBMediaPlaybackService> mediaPlaybackService;
@property(readonly, nonatomic) WBTableView *mediaPlaybackTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;
- (void)setupCopyAndShareTextContentView:(id)arg1 indexPath:(id)arg2;
@property(retain, nonatomic) NSIndexPath *lastVisibleCellIndexPath; // @dynamic lastVisibleCellIndexPath;
- (void)updateLastVisibleCellIndexPath;
@property(nonatomic) _Bool lastVisibleCellCopyAndShareEnabled; // @dynamic lastVisibleCellCopyAndShareEnabled;
@property(nonatomic) _Bool supportCopyAndShare; // @dynamic supportCopyAndShare;
@property(nonatomic) __weak id <WBHeadlineContentViewControllerCopyAndShareDelegate> copyAndShardContentViewDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool generalMediaAutoPlayEnabledWhenContainedInAnotherContainer;
@property(readonly, nonatomic) _Bool generalMediaAutoPlayIgnored;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool mediaAutoPlayShouldStartNow;
@property(readonly, nonatomic) struct CGRect mediaAutoPlayVisibleRect;
@property(readonly) Class superclass;

@end

