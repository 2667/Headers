//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIControl, UIImage;

@interface QQTabView : UIView
{
    _Bool _showMask;
    _Bool _isShowing;
    double _spaceHeightBetweenImageAndTitle;
    struct CGRect _originFrame;
    CDUnknownBlockType _tabItemDidTapedBlock;
    CDUnknownBlockType _willHideBlock;
    CDUnknownBlockType _hideCompletionBlock;
    CDUnknownBlockType _willShowBlock;
    CDUnknownBlockType _showCompletionBlock;
    UIControl *_maskView;
    UIView *_parentView;
    UIImage *_backgroundImage;
    _Bool _showSeperatorLine;
    double _seperatorLineWidth;
    UIColor *_seperatorLineColor;
    long long _tabItemsCountPerRow;
    _Bool _dismissWhenTabItemTaped;
    int _xo;
    double _seperatorLineLength;
}

@property(nonatomic) double seperatorLineLength; // @synthesize seperatorLineLength=_seperatorLineLength;
- (void)maskViewTaped:(id)arg1;
- (void)createMaskView;
- (void)hide:(_Bool)arg1;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)itemTaped:(id)arg1;
- (void)setTabItemDidTapedBlock:(CDUnknownBlockType)arg1;
- (void)setWillHideBlock:(CDUnknownBlockType)arg1;
- (void)setWillShowBlock:(CDUnknownBlockType)arg1;
- (void)setShowCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setHideCompletionBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) double seperatorLineWidth; // @dynamic seperatorLineWidth;
@property(copy, nonatomic) UIColor *seperatorLineColor; // @dynamic seperatorLineColor;
@property(nonatomic) _Bool showSeperatorLine; // @dynamic showSeperatorLine;
@property(retain, nonatomic) UIImage *backgroundImage; // @dynamic backgroundImage;
@property(nonatomic) double spaceHeightBetweenImageAndTitle; // @dynamic spaceHeightBetweenImageAndTitle;
@property(readonly, nonatomic, getter=isShowing) _Bool showing;
- (long long)indexOfTabItem:(id)arg1;
- (void)removeTabItemAtIndex:(long long)arg1;
- (void)removeTabItem:(id)arg1;
- (void)addTabItem:(id)arg1;
- (void)setTabItems:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) _Bool dismissWhenTabItemTaped; // @dynamic dismissWhenTabItemTaped;
@property(nonatomic) _Bool showMask; // @dynamic showMask;
@property(nonatomic) long long tabItemsCountPerRow; // @dynamic tabItemsCountPerRow;

@end

