//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, NSMutableDictionary, NSString, PKImageView, PKShareSourceView, PKTipsWidget;

@interface PKBaseCell : UITableViewCell
{
    _Bool _canDelete;
    _Bool _hasHeaderView;
    _Bool _hasShareSourceView;
    _Bool _hasFooterView;
    NSDictionary *_chatDataSource;
    NSDictionary *_viewSourceDict;
    NSDictionary *_propertieSourceDict;
    NSDictionary *_dataSourceDict;
    NSMutableDictionary *_activeWidgetDict;
    NSDictionary *_autoLayoutSizeInfo;
    NSString *_pageID;
    NSString *_skinCode;
    long long _pageHeight;
    long long _pageWidth;
    NSDictionary *_pageParams;
    long long _alignmentType;
    PKImageView *_backgroundImageView;
    PKTipsWidget *_cellHeaderView;
    PKShareSourceView *_cellShareSourceView;
    PKTipsWidget *_cellFooterView;
    struct CGSize _sectionHeaderSize;
    struct CGSize _sectionShareSourceSize;
    struct CGSize _sectionFooterSize;
}

+ (struct CGSize)sizeofCellFooterView:(id)arg1 cellDict:(id)arg2;
+ (struct CGSize)sizeofCellShareSourceView:(id)arg1 cellDict:(id)arg2;
+ (struct CGSize)sizeofCellHeaderView:(id)arg1 cellDict:(id)arg2;
+ (id)sizeofCell:(id)arg1 dataDict:(id)arg2 cellDict:(id)arg3;
@property(retain, nonatomic) PKTipsWidget *cellFooterView; // @synthesize cellFooterView=_cellFooterView;
@property(retain, nonatomic) PKShareSourceView *cellShareSourceView; // @synthesize cellShareSourceView=_cellShareSourceView;
@property(retain, nonatomic) PKTipsWidget *cellHeaderView; // @synthesize cellHeaderView=_cellHeaderView;
@property(nonatomic) struct CGSize sectionFooterSize; // @synthesize sectionFooterSize=_sectionFooterSize;
@property(nonatomic) struct CGSize sectionShareSourceSize; // @synthesize sectionShareSourceSize=_sectionShareSourceSize;
@property(nonatomic) struct CGSize sectionHeaderSize; // @synthesize sectionHeaderSize=_sectionHeaderSize;
@property(nonatomic) _Bool hasFooterView; // @synthesize hasFooterView=_hasFooterView;
@property(nonatomic) _Bool hasShareSourceView; // @synthesize hasShareSourceView=_hasShareSourceView;
@property(nonatomic) _Bool hasHeaderView; // @synthesize hasHeaderView=_hasHeaderView;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(retain, nonatomic) PKImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) long long alignmentType; // @synthesize alignmentType=_alignmentType;
@property(retain, nonatomic) NSDictionary *pageParams; // @synthesize pageParams=_pageParams;
@property(nonatomic) long long pageWidth; // @synthesize pageWidth=_pageWidth;
@property(nonatomic) long long pageHeight; // @synthesize pageHeight=_pageHeight;
@property(copy, nonatomic) NSString *skinCode; // @synthesize skinCode=_skinCode;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(retain, nonatomic) NSDictionary *autoLayoutSizeInfo; // @synthesize autoLayoutSizeInfo=_autoLayoutSizeInfo;
@property(retain, nonatomic) NSMutableDictionary *activeWidgetDict; // @synthesize activeWidgetDict=_activeWidgetDict;
@property(retain, nonatomic) NSDictionary *dataSourceDict; // @synthesize dataSourceDict=_dataSourceDict;
@property(retain, nonatomic) NSDictionary *propertieSourceDict; // @synthesize propertieSourceDict=_propertieSourceDict;
@property(retain, nonatomic) NSDictionary *viewSourceDict; // @synthesize viewSourceDict=_viewSourceDict;
@property(retain, nonatomic) NSDictionary *chatDataSource; // @synthesize chatDataSource=_chatDataSource;
- (void).cxx_destruct;
- (void)clean;
- (id)propertieViewSourceWithKey:(id)arg1;
- (id)viewSourceDictWithKey:(id)arg1;
- (id)dataSourceDictWithKey:(id)arg1;
- (void)specialHandling;
- (void)sideSubViews;
- (void)layoutFooterView;
- (void)layoutShareSourceView;
- (void)layoutHeaderView;
- (void)layoutPage;
- (void)bindingWidgetData:(id)arg1 sources:(id)arg2 data:(id)arg3 widgetInfo:(id)arg4;
- (void)bindingShareSourceViewWithData:(id)arg1;
- (void)bindingHeaderAndFooterViewWithData:(id)arg1;
- (void)bindingAndLayoutPageData:(id)arg1;
- (void)registerDelegate;
- (void)setupBackgroundView;
- (void)setupCellFooterView;
- (void)setupCellShareSourceView;
- (void)setupCellHeaderView;
- (id)findWidgetWithId:(id)arg1;
- (void)registerWidget:(id)arg1 widgetId:(id)arg2 sources:(id)arg3 widgetInfo:(id)arg4;
- (void)createWidgets;
- (void)createPage:(id)arg1 skinCode:(id)arg2 pageParams:(id)arg3 pageAlignment:(long long)arg4;
- (void)releaseUI;
- (void)setupUI;
- (void)releaseNotify;
- (void)setupNotify;

@end

