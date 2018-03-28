//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRTabRNInfoStructModel, NSString;
@protocol Optional;

@interface FRTabExtraStructModel : JSONModel
{
    NSString<Optional> *_umeng_name;
    NSString<Optional> *_query_dict;
    FRTabRNInfoStructModel<Optional> *_rn_info;
}

@property(retain, nonatomic) FRTabRNInfoStructModel<Optional> *rn_info; // @synthesize rn_info=_rn_info;
@property(retain, nonatomic) NSString<Optional> *query_dict; // @synthesize query_dict=_query_dict;
@property(retain, nonatomic) NSString<Optional> *umeng_name; // @synthesize umeng_name=_umeng_name;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
