//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphMomentsInsertion : PGGraphChange
{
    NSSet *_momentLocalIdentifiers;
    NSSet *_moments;
}

@property(readonly, nonatomic) NSSet *moments; // @synthesize moments=_moments;
@property(readonly, nonatomic) NSSet *momentLocalIdentifiers; // @synthesize momentLocalIdentifiers=_momentLocalIdentifiers;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)changeCount;
- (unsigned long long)type;
- (id)initWithMoments:(id)arg1;
- (id)initWithMomentLocalIdentifiers:(id)arg1;

@end
