//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TLKContentsContainerView : TLKStackView
{
    NSMutableArray *_contentsViews;
}

@property(retain, nonatomic) NSMutableArray *contentsViews; // @synthesize contentsViews=_contentsViews;
- (void).cxx_destruct;
- (void)updateWithContents:(id)arg1;
- (id)init;

@end
