//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIButton, UIColor, UILabel, UIScrollView, UIViewController, UIWindow;
@protocol NBScrollPadViewDataSource, NBScrollPadViewDelegate;

@interface NBScrollPadView : UIView
{
    _Bool _isShowing;
    id <NBScrollPadViewDataSource> _dataSource;
    id <NBScrollPadViewDelegate> _delegate;
    UIColor *_contentViewBgColor;
    UILabel *_tipsLabel;
    UIButton *_cancelBtn;
    UIScrollView *_contentView;
    NSMutableArray *_lineViews;
    NSMutableArray *_cutOffLines;
    UIWindow *_lastKeyWindow;
    UIWindow *_currentWindow;
    UIButton *_cancelButton;
    UIViewController *_containverVC;
    double _contentScrollViewHeight;
    double _originHeight;
    struct UIEdgeInsets _viewInsets;
}

@property(nonatomic) double originHeight; // @synthesize originHeight=_originHeight;
@property(nonatomic) double contentScrollViewHeight; // @synthesize contentScrollViewHeight=_contentScrollViewHeight;
@property(nonatomic) __weak UIViewController *containverVC; // @synthesize containverVC=_containverVC;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIWindow *currentWindow; // @synthesize currentWindow=_currentWindow;
@property(nonatomic) __weak UIWindow *lastKeyWindow; // @synthesize lastKeyWindow=_lastKeyWindow;
@property(retain, nonatomic) NSMutableArray *cutOffLines; // @synthesize cutOffLines=_cutOffLines;
@property(retain, nonatomic) NSMutableArray *lineViews; // @synthesize lineViews=_lineViews;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIColor *contentViewBgColor; // @synthesize contentViewBgColor=_contentViewBgColor;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) __weak id <NBScrollPadViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <NBScrollPadViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct UIEdgeInsets viewInsets; // @synthesize viewInsets=_viewInsets;
- (void).cxx_destruct;
- (void)dismiss;
- (void)show;
- (void)reload;
- (void)layoutSubviews;
- (void)setupContents;
- (void)setupLineScrollView:(id)arg1 atLineIndex:(long long)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

