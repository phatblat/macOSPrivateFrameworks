//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (PFBSMTrackedResourceMethods)
- (BOOL)runBlockWithBSMResourceAccess:(CDUnknownBlockType)arg1;
- (void)endBSMResourceActivity:(id)arg1;
- (id)beginBSMResourceActivity:(id)arg1;
- (void)unregisterBSMResourceClient:(id)arg1;
- (BOOL)registerBSMResourceClient:(id)arg1;
- (void)setResourceAccessIdentifier:(id)arg1;
- (id)resourceAccessIdentifier;
@end

