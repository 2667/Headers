//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseUGCComponent.h"

@class UIImageView, UILabel, UIView;

@interface TBOUGCForbidUploadImageComponent : TBOBaseUGCComponent
{
    UIView *_contentView;
    UIImageView *_icon;
    UILabel *_lbText;
}

+ (id)componentName;
@property(retain, nonatomic) UILabel *lbText; // @synthesize lbText=_lbText;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)applyData:(id)arg1;
- (void)applyStyle:(id)arg1;
- (id)initWithContext:(id)arg1 parent:(id)arg2;
- (id)defaultStyle;

@end
