//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SPBorderContainer : UIView
{
    long long _lineType;
    UIView *_topLine;
    UIView *_btmLine;
}

@property(retain, nonatomic) UIView *btmLine; // @synthesize btmLine=_btmLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) long long lineType; // @synthesize lineType=_lineType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadContainerWithBorderLineType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
