//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNotesMetadataResultSpec : FATObject
{
    NSNumber *_includeTitle;
    NSNumber *_includeContentLength;
    NSNumber *_includeCreated;
    NSNumber *_includeUpdated;
    NSNumber *_includeDeleted;
    NSNumber *_includeUpdateSequenceNum;
    NSNumber *_includeNotebookGuid;
    NSNumber *_includeTagGuids;
    NSNumber *_includeAttributes;
    NSNumber *_includeLargestResourceMime;
    NSNumber *_includeLargestResourceSize;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *includeLargestResourceSize; // @synthesize includeLargestResourceSize=_includeLargestResourceSize;
@property(retain, nonatomic) NSNumber *includeLargestResourceMime; // @synthesize includeLargestResourceMime=_includeLargestResourceMime;
@property(retain, nonatomic) NSNumber *includeAttributes; // @synthesize includeAttributes=_includeAttributes;
@property(retain, nonatomic) NSNumber *includeTagGuids; // @synthesize includeTagGuids=_includeTagGuids;
@property(retain, nonatomic) NSNumber *includeNotebookGuid; // @synthesize includeNotebookGuid=_includeNotebookGuid;
@property(retain, nonatomic) NSNumber *includeUpdateSequenceNum; // @synthesize includeUpdateSequenceNum=_includeUpdateSequenceNum;
@property(retain, nonatomic) NSNumber *includeDeleted; // @synthesize includeDeleted=_includeDeleted;
@property(retain, nonatomic) NSNumber *includeUpdated; // @synthesize includeUpdated=_includeUpdated;
@property(retain, nonatomic) NSNumber *includeCreated; // @synthesize includeCreated=_includeCreated;
@property(retain, nonatomic) NSNumber *includeContentLength; // @synthesize includeContentLength=_includeContentLength;
@property(retain, nonatomic) NSNumber *includeTitle; // @synthesize includeTitle=_includeTitle;
- (void).cxx_destruct;

@end

