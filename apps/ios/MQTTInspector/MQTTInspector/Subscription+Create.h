//
//  Subscription+Create.h
//  MQTTInspector
//
//  Created by Christoph Krey on 12.11.13.
//  Copyright © 2013-2016 Christoph Krey. All rights reserved.
//

#import "UIKit/UIKit.h"
#import "Subscription.h"

@interface Subscription (Create)
+ (Subscription *)existsSubscriptionWithTopic:(NSString *)topic
                                   session:(Session *)session
                    inManagedObjectContext:(NSManagedObjectContext *)context;

+ (Subscription *)subscriptionWithTopic:(NSString *)topic
                            qos:(int)qos
                        session:(Session *)session
         inManagedObjectContext:(NSManagedObjectContext *)managedObjectContext;

- (UIColor *)getColor;
@end
