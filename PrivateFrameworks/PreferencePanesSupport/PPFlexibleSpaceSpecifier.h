//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PreferencePanesSupport/PPSpecifier.h>

@class NSLayoutConstraint;

@interface PPFlexibleSpaceSpecifier : PPSpecifier
{
    BOOL _autoresizing;
    NSLayoutConstraint *_constraint;
}

+ (id)flexibleSpaceSpecifier;
+ (id)autoresizingFlexibleSpaceSpecifier;
@property __weak NSLayoutConstraint *constraint; // @synthesize constraint=_constraint;
@property BOOL autoresizing; // @synthesize autoresizing=_autoresizing;
- (void).cxx_destruct;
@property double height; // @dynamic height;

@end

