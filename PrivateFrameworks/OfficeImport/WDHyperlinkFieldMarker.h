//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/WDFieldMarker.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDHyperlinkFieldMarker : WDFieldMarker
{
    NSString *mLink;
    NSString *mFragment;
    unsigned int mInternalLink:1;
}

@property(retain, nonatomic) NSString *fragment; // @synthesize fragment=mFragment;
@property(retain, nonatomic) NSString *link; // @synthesize link=mLink;
@property(nonatomic) BOOL internalLink; // @synthesize internalLink=mInternalLink;
- (void).cxx_destruct;
- (id)description;
- (int)runType;

@end

