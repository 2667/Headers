//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, TTLTagView, UILabel;

@interface TTLAddTagViewController : UIViewController
{
    TTLTagView *_tagView;
    UILabel *_chosenLabel;
    NSMutableArray *_chosenLabelArray;
}

@property(retain, nonatomic) NSMutableArray *chosenLabelArray; // @synthesize chosenLabelArray=_chosenLabelArray;
@property(retain, nonatomic) UILabel *chosenLabel; // @synthesize chosenLabel=_chosenLabel;
@property(retain, nonatomic) TTLTagView *tagView; // @synthesize tagView=_tagView;
- (void).cxx_destruct;
- (void)dismissSelf;
- (void)didReceiveMemoryWarning;
- (void)updateChosenLabel;
- (void)viewDidLoad;

@end

