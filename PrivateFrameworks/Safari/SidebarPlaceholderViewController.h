//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSTextField;

__attribute__((visibility("hidden")))
@interface SidebarPlaceholderViewController : NSViewController
{
    NSTextField *_descriptionLabel;
}

+ (id)readingListPlaceholderViewController;
@property(nonatomic) __weak NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (void).cxx_destruct;
- (void)updateDescriptionIfNecessaryWithString:(id)arg1;

@end
