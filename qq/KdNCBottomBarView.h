//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol KdNCBottomBarViewDelegate;

@interface KdNCBottomBarView : UIView
{
    id <KdNCBottomBarViewDelegate> _delegate;
    UILabel *_textLabel;
    UILabel *_commentTipLabel;
}

+ (id)bottomBarViewWithMode:(unsigned long long)arg1 andTop:(double)arg2;
@property(retain, nonatomic) UILabel *commentTipLabel; // @synthesize commentTipLabel=_commentTipLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) id <KdNCBottomBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickToolBtn:(id)arg1;
- (void)setTipText:(id)arg1;
- (void)setCommentTip:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andMode:(unsigned long long)arg2;

@end
