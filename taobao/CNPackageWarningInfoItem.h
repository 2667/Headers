//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface CNPackageWarningInfoItem : TBJSONModel
{
    _Bool _hasException;
    NSString *_title;
    NSString *_desc;
    NSString *_defaultExceptionText;
    long long _type;
}

@property(nonatomic) _Bool hasException; // @synthesize hasException=_hasException;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *defaultExceptionText; // @synthesize defaultExceptionText=_defaultExceptionText;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
