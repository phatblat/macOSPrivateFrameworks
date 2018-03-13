//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSSiteMetadataRequest.h"

#import "FetchableItem.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BookmarkSummaryRequest : WBSSiteMetadataRequest <FetchableItem>
{
}

- (id)urlString;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

