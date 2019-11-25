//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class DiagnosticCaseStorage, NSDate, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UploadRecord : NSManagedObject
{
    NSMutableArray *fileURLs;
}

+ (id)fetchRequest;
@property(retain, nonatomic) NSMutableArray *fileURLs; // @synthesize fileURLs;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) BOOL allowsCellular; // @dynamic allowsCellular;
@property(retain, nonatomic) DiagnosticCaseStorage *caseStorage; // @dynamic caseStorage;
@property(nonatomic) short environment; // @dynamic environment;
@property(copy, nonatomic) NSDate *finishTime; // @dynamic finishTime;
@property(nonatomic) short numberOfFiles; // @dynamic numberOfFiles;
@property(copy, nonatomic) NSString *operationID; // @dynamic operationID;
@property(nonatomic) short preflightResult; // @dynamic preflightResult;
@property(nonatomic) short priority; // @dynamic priority;
@property(nonatomic) float progress; // @dynamic progress;
@property(copy, nonatomic) NSDate *startTime; // @dynamic startTime;
@property(nonatomic) long long totalBytes; // @dynamic totalBytes;
@property(nonatomic) short uploadState; // @dynamic uploadState;

@end

