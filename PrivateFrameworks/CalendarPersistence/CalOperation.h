//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectID, NSString;

@interface CalOperation : NSObject
{
    NSString *_sessionID;
    NSManagedObjectID *_sessionIDAsObjectID;
}

@property(retain) NSManagedObjectID *sessionIDAsObjectID; // @synthesize sessionIDAsObjectID=_sessionIDAsObjectID;
@property(retain) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (id)session;
- (id)debugDescription;
- (id)debugTitle;
- (BOOL)executeInContext:(id)arg1 error:(id *)arg2;
- (id)initWithSessionID:(id)arg1;

@end

