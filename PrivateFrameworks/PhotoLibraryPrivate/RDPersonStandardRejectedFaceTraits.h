//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RDPersonRejectedFaceTraits.h"

@class RDDatabase, RDTable;

@interface RDPersonStandardRejectedFaceTraits : NSObject <RDPersonRejectedFaceTraits>
{
    RDDatabase *_database;
}

- (void).cxx_destruct;
- (long long)faceIdForRejectedFace:(id)arg1;
- (long long)personIdForRejectedFace:(id)arg1;
- (void)rejectedFaces:(id)arg1 forPersonId:(long long)arg2;
- (id)filterForRejectedFacesForPersonId:(long long)arg1;
@property(readonly, nonatomic) RDTable *rejectedFaceTable;
- (id)initWithDatabase:(id)arg1;

@end

