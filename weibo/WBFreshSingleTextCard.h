//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSString, WBUser;

@interface WBFreshSingleTextCard : WBPageCard
{
    _Bool _showTop;
    _Bool _showBottom;
    _Bool _changeLabelTop;
    long long _mp_type;
    WBUser *_user;
    NSString *_text;
}

+ (Class)viewClass;
+ (Class)fangleTableCellClass;
@property(nonatomic) _Bool changeLabelTop; // @synthesize changeLabelTop=_changeLabelTop;
@property(nonatomic) _Bool showBottom; // @synthesize showBottom=_showBottom;
@property(nonatomic) _Bool showTop; // @synthesize showTop=_showTop;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) WBUser *user; // @synthesize user=_user;
@property(nonatomic) long long mp_type; // @synthesize mp_type=_mp_type;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

