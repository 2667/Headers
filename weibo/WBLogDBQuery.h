//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface WBLogDBQuery : NSObject <NSCopying>
{
    Class _cls;
    NSMutableArray *_grpups;
    NSMutableArray *_orders_asc;
    NSMutableArray *_orders_desc;
    NSMutableArray *_filters;
    NSMutableArray *_or_filters;
    NSString *_limited_string;
}

+ (id)queryWithModel:(Class)arg1;
- (void).cxx_destruct;
- (id)_sql_string:(id)arg1 limited:(id)arg2;
- (id)_delete_string:(id)arg1;
- (id)_select_string:(id)arg1 limited:(id)arg2;
- (_Bool)raw_update:(id)arg1;
- (id)raw:(id)arg1;
- (id)filter:(id)arg1;
- (id)or_filter:(id)arg1;
- (id)order_by:(id)arg1;
- (id)group_by:(id)arg1;
- (id)aggregate_sum:(id)arg1;
- (id)aggregate_min:(id)arg1;
- (id)aggregate_max:(id)arg1;
- (id)aggregate_count:(id)arg1;
- (id)aggregate_avg:(id)arg1;
- (_Bool)delWithLimited:(unsigned long long)arg1;
- (_Bool)del;
- (id)get;
- (id)allWithIndex:(unsigned long long)arg1 limited:(unsigned long long)arg2;
- (id)allWithLimited:(unsigned long long)arg1;
- (id)all;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithModel:(Class)arg1;

@end

