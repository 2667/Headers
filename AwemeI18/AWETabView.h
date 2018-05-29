//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEStudioNumButton, NSArray, NSMutableArray;

@interface AWETabView : UIView
{
    CDUnknownBlockType _clickedTabBlock;
    NSArray *_namesOfTabs;
    NSMutableArray *_tabs;
    NSMutableArray *_views;
    long long _numberOfTabs;
    AWEStudioNumButton *_currentChooseTab;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) AWEStudioNumButton *currentChooseTab; // @synthesize currentChooseTab=_currentChooseTab;
@property(nonatomic) long long numberOfTabs; // @synthesize numberOfTabs=_numberOfTabs;
@property(retain, nonatomic) NSMutableArray *views; // @synthesize views=_views;
@property(retain, nonatomic) NSMutableArray *tabs; // @synthesize tabs=_tabs;
@property(copy, nonatomic) NSArray *namesOfTabs; // @synthesize namesOfTabs=_namesOfTabs;
@property(copy, nonatomic) CDUnknownBlockType clickedTabBlock; // @synthesize clickedTabBlock=_clickedTabBlock;
- (void).cxx_destruct;
- (void)changeColor:(id)arg1 color:(id)arg2;
- (void)clickedTab:(id)arg1;
- (void)setNamesOfTabs:(id)arg1 views:(id)arg2;
- (id)init;

@end

