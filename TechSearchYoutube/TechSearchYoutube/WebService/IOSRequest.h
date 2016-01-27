//
//  IOSRequest.h
//  TechSearchYoutube
//
//  Created by ToanLH on 1/14/16.
//  Copyright © 2016 ToanLH. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef void (^RequestCompletionHandler)(NSString*, NSError*);
typedef void (^RequestDictionaryCompletionHandler)(NSDictionary*);

@interface IOSRequest : NSObject

+ (void)requestPath:(NSString *)path
       onCompletion:(RequestCompletionHandler)complete;

+ (void)search:(NSString*)keyword
  onCompletion:(RequestDictionaryCompletionHandler)complete;

@end
