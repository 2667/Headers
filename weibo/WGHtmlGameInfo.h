//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WGGameAppInfo2.h"

@class NSString;

@interface WGHtmlGameInfo : WGGameAppInfo2
{
    NSString *_htmlGameid;
    NSString *_tips;
    NSString *_buttonTitle;
}

+ (id)htmlGameListWithDic:(id)arg1;
+ (id)htmlGameInfoWithDic:(id)arg1;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString *htmlGameid; // @synthesize htmlGameid=_htmlGameid;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

