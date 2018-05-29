//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSMutableArray, UIColor;

@interface AWEGoodsPageControl : UIView
{
    double _progress;
    long long _pageCount;
    long long _currentPage;
    UIColor *_activeTintColor;
    UIColor *_inactiveTintColor;
    double _indicatorPadding;
    double _indicatorRadius;
    CALayer *_activeLayer;
    NSMutableArray *_inactiveLayers;
    double _indicatorDiameter;
}

@property(nonatomic) double indicatorDiameter; // @synthesize indicatorDiameter=_indicatorDiameter;
@property(retain, nonatomic) NSMutableArray *inactiveLayers; // @synthesize inactiveLayers=_inactiveLayers;
@property(retain, nonatomic) CALayer *activeLayer; // @synthesize activeLayer=_activeLayer;
@property(nonatomic) double indicatorRadius; // @synthesize indicatorRadius=_indicatorRadius;
@property(nonatomic) double indicatorPadding; // @synthesize indicatorPadding=_indicatorPadding;
@property(retain, nonatomic) UIColor *inactiveTintColor; // @synthesize inactiveTintColor=_inactiveTintColor;
@property(retain, nonatomic) UIColor *activeTintColor; // @synthesize activeTintColor=_activeTintColor;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_layoutInactivePageIndicators;
- (void)_layoutActivePageIndicator;
- (void)_updateNumberOfPages:(long long)arg1;
- (id)init;

@end

