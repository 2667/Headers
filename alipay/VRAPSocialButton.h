//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VRView.h"

@class NSDictionary, NSString, VRImageView, VRLabel;

@interface VRAPSocialButton : VRView
{
    long long _buttonIndex;
    NSString *_selectBoolStr;
    VRImageView *_icon;
    VRLabel *_label;
    NSDictionary *_infoDic;
    NSString *_identifer;
    struct CGRect _oRect;
}

+ (id)newDesLabel;
@property(retain, nonatomic) NSString *identifer; // @synthesize identifer=_identifer;
@property(nonatomic) struct CGRect oRect; // @synthesize oRect=_oRect;
@property(retain, nonatomic) NSDictionary *infoDic; // @synthesize infoDic=_infoDic;
@property(retain, nonatomic) VRLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) VRImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *selectBoolStr; // @synthesize selectBoolStr=_selectBoolStr;
@property(nonatomic) long long buttonIndex; // @synthesize buttonIndex=_buttonIndex;
- (void).cxx_destruct;
- (void)refreshData:(id)arg1 maxWidth:(double)arg2;
- (id)initWithHeight:(double)arg1 dic:(id)arg2 identifer:(id)arg3 maxWidth:(double)arg4;

@end
