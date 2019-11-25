//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSString;

@interface DESRecipe : NSObject <NSCopying>
{
    NSDictionary *_recipeUserInfo;
    NSArray *_attachments;
    NSDictionary *_parametersUsed;
    NSString *_recipeId;
    NSString *_recipeType;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *recipeType; // @synthesize recipeType=_recipeType;
@property(copy, nonatomic) NSString *recipeId; // @synthesize recipeId=_recipeId;
@property(readonly, copy, nonatomic) NSDictionary *parametersUsed; // @synthesize parametersUsed=_parametersUsed;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(readonly, copy, nonatomic) NSDictionary *recipeUserInfo; // @synthesize recipeUserInfo=_recipeUserInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithRecipeResponse:(id)arg1 recipeId:(id)arg2 recipeType:(id)arg3 error:(id *)arg4;
- (id)_initWithRecipeUserInfo:(id)arg1 recipeId:(id)arg2 recipeType:(id)arg3;
- (id)_inithWithContentsOfFile:(id)arg1 recipeId:(id)arg2 recipeType:(id)arg3 error:(id *)arg4;

@end

