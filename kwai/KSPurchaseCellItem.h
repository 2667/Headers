//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface KSPurchaseCellItem : NSObject
{
    _Bool _showSeparatorLine;
    UIImage *_icon;
    NSString *_title;
    NSString *_hint;
    CDUnknownBlockType _didTapCell;
}

+ (id)instanceWithIcon:(id)arg1 title:(id)arg2 hint:(id)arg3 showSeparatorLine:(_Bool)arg4 action:(CDUnknownBlockType)arg5;
+ (id)instanceWithIcon:(id)arg1 title:(id)arg2 showSeparatorLine:(_Bool)arg3 action:(CDUnknownBlockType)arg4;
+ (id)instanceWithIcon:(id)arg1 title:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType didTapCell; // @synthesize didTapCell=_didTapCell;
@property(nonatomic) _Bool showSeparatorLine; // @synthesize showSeparatorLine=_showSeparatorLine;
@property(retain, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)initWithIcon:(id)arg1 title:(id)arg2;

@end

