//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRThreadFooterBaseManager.h"

#import "FRThreadFooterCommonEmptyCellDelegate-Protocol.h"
#import "FRThreadFooterCommonTipCellDelegate-Protocol.h"
#import "TTThreadFooterContainerViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FRThreadFooterDiggViewModel, NSDictionary, NSIndexPath, NSString;
@protocol FRThreadFooterDiggDelegate;

@interface FRThreadFooterDiggManager : FRThreadFooterBaseManager <FRThreadFooterCommonTipCellDelegate, UITableViewDelegate, UITableViewDataSource, FRThreadFooterCommonEmptyCellDelegate, TTThreadFooterContainerViewControllerProtocol>
{
    _Bool _needRefreshLayout;
    _Bool _hasRefreshData;
    long long _entityID;
    long long _entityIdType;
    NSDictionary *_trackExtra;
    long long _msgID;
    long long _forumID;
    NSString *_contentAuthorID;
    FRThreadFooterDiggViewModel *_diggManger;
    NSIndexPath *_needAnimatedIndexPath;
    id <FRThreadFooterDiggDelegate> _diggDelegate;
    double _emptyCellHeight;
    double _selfLastOffset;
    double _lastMangerOffset;
    struct CGRect _containerFrame;
}

@property(nonatomic) _Bool hasRefreshData; // @synthesize hasRefreshData=_hasRefreshData;
@property(nonatomic) double lastMangerOffset; // @synthesize lastMangerOffset=_lastMangerOffset;
@property(nonatomic) double selfLastOffset; // @synthesize selfLastOffset=_selfLastOffset;
@property(nonatomic) double emptyCellHeight; // @synthesize emptyCellHeight=_emptyCellHeight;
@property(nonatomic) __weak id <FRThreadFooterDiggDelegate> diggDelegate; // @synthesize diggDelegate=_diggDelegate;
@property(nonatomic) _Bool needRefreshLayout; // @synthesize needRefreshLayout=_needRefreshLayout;
@property(retain, nonatomic) NSIndexPath *needAnimatedIndexPath; // @synthesize needAnimatedIndexPath=_needAnimatedIndexPath;
@property(retain, nonatomic) FRThreadFooterDiggViewModel *diggManger; // @synthesize diggManger=_diggManger;
@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
@property(retain, nonatomic) NSString *contentAuthorID; // @synthesize contentAuthorID=_contentAuthorID;
@property(nonatomic) long long forumID; // @synthesize forumID=_forumID;
@property(nonatomic) long long msgID; // @synthesize msgID=_msgID;
@property(copy, nonatomic) NSDictionary *trackExtra; // @synthesize trackExtra=_trackExtra;
@property(nonatomic) long long entityIdType; // @synthesize entityIdType=_entityIdType;
@property(nonatomic) long long entityID; // @synthesize entityID=_entityID;
- (void).cxx_destruct;
- (void)FR_sendHalfStatusFooterImpressionsForVisibleCellsWithOffset:(double)arg1;
- (void)FR_sendShowTrackForVisibleCells;
- (void)FR_sendShowStatusTrackForShow:(_Bool)arg1;
- (_Bool)FR_scrollToIndexPath:(id)arg1;
- (void)FR_refreshData;
- (void)FR_markTopCellNeedAnimation;
- (void)FR_insertDataWithDict:(id)arg1;
- (void)FR_footerViewDidDisappear;
- (void)FR_footerViewWillDisappear;
- (void)FR_footerViewDidAppear;
- (void)FR_footerViewWillAppear;
- (void)FR_didLayoutTableView;
- (_Bool)FR_isSelfResponsible;
- (void)FR_managerDidUnResponsibleForTableView:(id)arg1 toManager:(id)arg2 withAction:(unsigned long long)arg3;
- (void)FR_managerWillUnResponsibleForTableView:(id)arg1 toManager:(id)arg2 withAction:(unsigned long long)arg3;
- (void)FR_managerDidResponsibleForTableView:(id)arg1 fromManager:(id)arg2 withAction:(unsigned long long)arg3;
- (void)FR_managerWillResponsibleWithTableView:(id)arg1 fromManager:(id)arg2 withAction:(unsigned long long)arg3;
- (void)FR_managerBeResponsibleForTableView:(id)arg1 fromManager:(id)arg2 withAction:(unsigned long long)arg3;
- (void)FR_registerTableView:(id)arg1;
- (void)frFooterCommonEmptyCell:(id)arg1 emptyCellType:(long long)arg2 indicateType:(long long)arg3;
- (void)fr_commFooterTipCell:(id)arg1 onClickForCellType:(unsigned long long)arg2 tipType:(unsigned long long)arg3;
- (unsigned long long)footerCellType;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cancelDiggCommentSuccess:(id)arg1;
- (void)diggCommentSuccess:(id)arg1;
- (void)cancelDiggThreadSuccess:(id)arg1;
- (void)diggThreadSuccess:(id)arg1;
- (void)applicationStautsBarDidRotate;
- (void)fontSizeChanged;
- (id)p_selfDiggUserModel;
- (_Bool)p_shouldShowPlainFooterEmptyCellInSection;
- (void)p_loadMoreData;
- (void)p_refreshData;
- (double)p_tableViewTotalContentSizeNeedInser;
- (void)p_refreshListUI;
- (void)p_addPullUpViewIfNeeded;
- (void)p_commonConfigure;
- (id)initWithEntityID:(long long)arg1 withEntityIdType:(long long)arg2 withMessageID:(long long)arg3 withForumID:(long long)arg4 withContentAuthorID:(id)arg5 withContainerFrame:(struct CGRect)arg6 withDiggDelegate:(id)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
