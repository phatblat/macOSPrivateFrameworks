//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class EWSFindFolderParentType;

@interface EWSFindFolderResponseMessageType : EWSResponseMessageType
{
    EWSFindFolderParentType *_RootFolder;
}

+ (id)definition;
@property(retain, nonatomic) EWSFindFolderParentType *RootFolder; // @synthesize RootFolder=_RootFolder;
- (void).cxx_destruct;

@end

