//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WGErrorView : UIView
{
    UIImageView *_errorImV;
    UILabel *_errorLbl;
    UILabel *_tipLbl;
}

@property(retain, nonatomic) UILabel *tipLbl; // @synthesize tipLbl=_tipLbl;
@property(retain, nonatomic) UILabel *errorLbl; // @synthesize errorLbl=_errorLbl;
@property(retain, nonatomic) UIImageView *errorImV; // @synthesize errorImV=_errorImV;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

