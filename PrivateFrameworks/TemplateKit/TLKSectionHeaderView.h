//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKView.h>

@class TLKLabel, TLKMultilineText, TLKProminenceView;

@interface TLKSectionHeaderView : TLKView
{
    TLKMultilineText *_headerText;
    TLKLabel *_headerTextLabel;
    TLKProminenceView *_backgroundView;
}

@property(retain, nonatomic) TLKProminenceView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) TLKLabel *headerTextLabel; // @synthesize headerTextLabel=_headerTextLabel;
@property(retain, nonatomic) TLKMultilineText *headerText; // @synthesize headerText=_headerText;
- (void).cxx_destruct;
- (id)headerLabelText;
- (void)observedPropertiesChanged;
- (BOOL)usesDefaultInsets;
- (id)setupContentView;

@end

